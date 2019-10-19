//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveCancelableSegue-Protocol.h"
#import "IESLiveTrackerSegue-Protocol.h"

@class IESLiveNewPlayerController, LiveRoomModel, NSArray, NSDictionary, NSIndexPath, NSNumber, NSString, UIViewController;
@protocol HTSLiveRoomCollectionDelegate;

@interface IESLiveMultiRoomSegue : NSObject <IESLiveCancelableSegue, IESLiveTrackerSegue>
{
    _Bool _isFromDouPlusVideo;
    _Bool _allowDislike;
    _Bool _canGoBack;
    _Bool _pushWithBack;
    _Bool _closeCurrentRoom;
    _Bool _enableUseMultiURL;
    _Bool _enableUseScrollURL;
    _Bool _enableUseOuterFeed;
    _Bool _goLiveSquare;
    _Bool _enableFeedDrawer;
    _Bool _canceled;
    NSString *_enterMethod;
    NSString *_enterFrom;
    NSString *_actionType;
    NSDictionary *_contextParams;
    long long _starlightRank;
    NSDictionary *_douPlusExtra;
    NSString *_outerRequestID;
    NSArray *_rooms;
    LiveRoomModel *_originRoom;
    id <HTSLiveRoomCollectionDelegate> _delegate;
    UIViewController *_sourceController;
    IESLiveNewPlayerController *_player;
    NSNumber *_anchorId;
    NSString *_secAnochorId;
    CDUnknownBlockType _afterDidLoad;
    NSString *_innerFeedRequestFrom;
    NSNumber *_innerFeedRequestMaxTime;
    NSString *_innerFeedURL;
    id <HTSLiveRoomCollectionDelegate> _outsideDelegate;
    NSIndexPath *_originIndexPath;
    NSDictionary *_monitorContext;
}

@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(copy, nonatomic) NSDictionary *monitorContext; // @synthesize monitorContext=_monitorContext;
@property(nonatomic) _Bool enableFeedDrawer; // @synthesize enableFeedDrawer=_enableFeedDrawer;
@property(nonatomic) _Bool goLiveSquare; // @synthesize goLiveSquare=_goLiveSquare;
@property(retain, nonatomic) NSIndexPath *originIndexPath; // @synthesize originIndexPath=_originIndexPath;
@property(nonatomic) __weak id <HTSLiveRoomCollectionDelegate> outsideDelegate; // @synthesize outsideDelegate=_outsideDelegate;
@property(nonatomic) _Bool enableUseOuterFeed; // @synthesize enableUseOuterFeed=_enableUseOuterFeed;
@property(retain, nonatomic) NSString *innerFeedURL; // @synthesize innerFeedURL=_innerFeedURL;
@property(retain, nonatomic) NSNumber *innerFeedRequestMaxTime; // @synthesize innerFeedRequestMaxTime=_innerFeedRequestMaxTime;
@property(retain, nonatomic) NSString *innerFeedRequestFrom; // @synthesize innerFeedRequestFrom=_innerFeedRequestFrom;
@property(nonatomic) _Bool enableUseScrollURL; // @synthesize enableUseScrollURL=_enableUseScrollURL;
@property(copy, nonatomic) CDUnknownBlockType afterDidLoad; // @synthesize afterDidLoad=_afterDidLoad;
@property(copy, nonatomic) NSString *secAnochorId; // @synthesize secAnochorId=_secAnochorId;
@property(retain, nonatomic) NSNumber *anchorId; // @synthesize anchorId=_anchorId;
@property(nonatomic) _Bool enableUseMultiURL; // @synthesize enableUseMultiURL=_enableUseMultiURL;
@property(nonatomic) _Bool closeCurrentRoom; // @synthesize closeCurrentRoom=_closeCurrentRoom;
@property(nonatomic) _Bool pushWithBack; // @synthesize pushWithBack=_pushWithBack;
@property(nonatomic) _Bool canGoBack; // @synthesize canGoBack=_canGoBack;
@property(nonatomic) _Bool allowDislike; // @synthesize allowDislike=_allowDislike;
@property(retain, nonatomic) IESLiveNewPlayerController *player; // @synthesize player=_player;
@property(nonatomic) __weak UIViewController *sourceController; // @synthesize sourceController=_sourceController;
@property(nonatomic) __weak id <HTSLiveRoomCollectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) LiveRoomModel *originRoom; // @synthesize originRoom=_originRoom;
@property(retain, nonatomic) NSArray *rooms; // @synthesize rooms=_rooms;
@property(retain, nonatomic) NSString *outerRequestID; // @synthesize outerRequestID=_outerRequestID;
@property(retain, nonatomic) NSDictionary *douPlusExtra; // @synthesize douPlusExtra=_douPlusExtra;
@property(nonatomic) _Bool isFromDouPlusVideo; // @synthesize isFromDouPlusVideo=_isFromDouPlusVideo;
@property(nonatomic) long long starlightRank; // @synthesize starlightRank=_starlightRank;
@property(retain, nonatomic) NSDictionary *contextParams; // @synthesize contextParams=_contextParams;
@property(copy, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(copy, nonatomic) NSString *enterMethod; // @synthesize enterMethod=_enterMethod;
- (void).cxx_destruct;
- (_Bool)canDirectEnterLiveRoom;
- (void)cancelRoomSegue;
- (_Bool)isCanceled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

