//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AvatarImageNodeDelegate-Protocol.h"
#import "ChatPostTextNodeDelegate-Protocol.h"
#import "CommentTreeHeaderNodeDelegate-Protocol.h"
#import "NSObject-Protocol.h"

@class ChatPostContentNode;

@protocol ChatPostContentNodeDelegate <NSObject, ChatPostTextNodeDelegate, AvatarImageNodeDelegate, CommentTreeHeaderNodeDelegate>
- (void)didTapContentNode:(ChatPostContentNode *)arg1;
@end
