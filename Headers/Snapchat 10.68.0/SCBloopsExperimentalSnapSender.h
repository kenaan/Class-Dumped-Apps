//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCGallerySendOperation;
@protocol SCChatConversationViewModel;

@interface SCBloopsExperimentalSnapSender : NSObject
{
    id <SCChatConversationViewModel> _conversationModel;
    SCGallerySendOperation *_sendOperation;
}

- (void).cxx_destruct;
- (void)sendBloopAsSnap:(id)arg1 userSession:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateConversationModel:(id)arg1;

@end

