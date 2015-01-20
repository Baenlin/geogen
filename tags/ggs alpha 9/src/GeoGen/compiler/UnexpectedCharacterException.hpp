#pragma once

#include "../String.hpp"
#include "CompilerException.hpp"

namespace geogen
{
	namespace compiler
	{
		/// Exception thrown when error geogen::GGE1101_UnexpectedCharacter occurs.
		class UnexpectedCharacterException : public CompilerException
		{
		private:
			Char character;
		public:
			explicit UnexpectedCharacterException(CodeLocation location, Char character) :
				CompilerException(GGE1101_UnexpectedCharacter, location), character(character)
			{
			};

			inline Char GetCharacter() const 
			{
				return this->character;
			}

			virtual String GetDetailMessage()
			{
				StringStream ss;
				ss << "Unexpected character \"" << this->GetCharacter() << "\" on line " << this->GetLocation().GetLine() << ", column " << this->GetLocation().GetColumn() << ".";
				return ss.str();
			}
		};
	}
}