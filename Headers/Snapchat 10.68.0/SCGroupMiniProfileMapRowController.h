//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileRowController.h"

@class NSString, SCEmbeddedMapViewLoggingSession, SCUserSession;
@protocol SCChatGroup, SCGroupMapViewDelegate;

@interface SCGroupMiniProfileMapRowController : SCMiniProfileRowController
{
    SCUserSession *_userSession;
    id <SCGroupMapViewDelegate> _groupMapDelegate;
    id <SCChatGroup> _group;
    SCEmbeddedMapViewLoggingSession *_loggingSession;
    NSString *_accessibilityIdentifier;
}

- (void).cxx_destruct;
- (void)didSelectCell;
- (void)willDisplayCell:(id)arg1;
- (double)cellHeight;
- (Class)cellClass;
- (id)initWithGroup:(id)arg1 userSession:(id)arg2 loggingSession:(id)arg3 groupMapDelegate:(id)arg4 accessibilityIdentifier:(id)arg5;

@end
