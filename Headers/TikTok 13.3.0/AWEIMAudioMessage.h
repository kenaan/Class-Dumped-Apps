//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMMessage.h"

@class AWEIMMessageAudioContent;

@interface AWEIMAudioMessage : AWEIMMessage
{
    AWEIMMessageAudioContent *_content;
}

@property(retain, nonatomic) AWEIMMessageAudioContent *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (_Bool)isAttachmentAtRemote;
- (_Bool)isAttachmentAtLocal;
- (_Bool)isAttachmentMessage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateWithMessage:(id)arg1;
- (id)getContent;
- (id)getContentDict;
- (id)initWithContentDict:(id)arg1;

@end

