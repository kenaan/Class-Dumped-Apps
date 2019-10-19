//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HTSEventContext, LiveRoomModel, NSArray, RACDisposable;
@protocol IESActionDispatcher, IESLiveUserService;

@interface HTSLiveMoreTabAssetStore : NSObject
{
    _Bool _shouldShowReddot;
    HTSEventContext *_trackContext;
    LiveRoomModel *_room;
    NSArray *_giftModels;
    NSArray *_giftGroup;
    unsigned long long _giftTabType;
    id <IESActionDispatcher> _dispatcher;
    RACDisposable *_disposable;
    id <IESLiveUserService> _userService;
}

@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(retain, nonatomic) id <IESActionDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(nonatomic) unsigned long long giftTabType; // @synthesize giftTabType=_giftTabType;
@property(nonatomic) _Bool shouldShowReddot; // @synthesize shouldShowReddot=_shouldShowReddot;
@property(retain, nonatomic) NSArray *giftGroup; // @synthesize giftGroup=_giftGroup;
@property(retain, nonatomic) NSArray *giftModels; // @synthesize giftModels=_giftModels;
@property(retain, nonatomic) LiveRoomModel *room; // @synthesize room=_room;
@property(retain, nonatomic) HTSEventContext *trackContext; // @synthesize trackContext=_trackContext;
- (void).cxx_destruct;
- (id)filtedGifts;
- (void)observerGiftData;
- (void)bindActions;
- (id)initWithRoom:(id)arg1 giftTabType:(unsigned long long)arg2;
- (void)dealloc;

@end

