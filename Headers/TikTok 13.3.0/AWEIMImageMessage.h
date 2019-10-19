//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMMessage.h"

@class AWEIMMessageImageContent, NSString, UIImage;

@interface AWEIMImageMessage : AWEIMMessage
{
    NSString *_uniqueId;
    AWEIMMessageImageContent *_content;
    UIImage *_forwardPreviewImage;
}

@property(retain, nonatomic) UIImage *forwardPreviewImage; // @synthesize forwardPreviewImage=_forwardPreviewImage;
@property(retain, nonatomic) AWEIMMessageImageContent *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (void).cxx_destruct;
- (_Bool)isAttachmentAtRemote;
- (_Bool)isAttachmentAtLocal;
- (_Bool)isAttachmentMessage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGSize)getDisplaySizeOfMsg;
- (void)updateWithMessage:(id)arg1;
- (id)getContent;
- (id)getContentDict;
- (id)initWithContentDict:(id)arg1;

@end

