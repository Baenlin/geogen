﻿namespace GeoGen.Studio.Utilities.Messaging
{
    public class Message
    {
        public string Text {get; set;}
        public MessageType Type {get; set;}

        public Message(string text, MessageType type = MessageType.Message)
        {
            this.Text = text;
            this.Type = type;
        }
    }
}