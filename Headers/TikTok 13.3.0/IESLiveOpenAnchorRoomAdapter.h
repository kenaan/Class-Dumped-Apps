//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HTSHotsoonRoomAPI;
@protocol IESLiveCreateRoomPreCheckService, IESLiveGuideShopFactory, IESLiveMonitor, IESLiveUserService, IESLiveVerifyConfig;

@interface IESLiveOpenAnchorRoomAdapter : NSObject
{
    id <IESLiveUserService> _userService;
    HTSHotsoonRoomAPI *_api;
    id <IESLiveGuideShopFactory> _guideShopFactory;
    id <IESLiveCreateRoomPreCheckService> _preCheckService;
    id <IESLiveMonitor> _monitor;
    id <IESLiveVerifyConfig> _verifyConfig;
    unsigned long long _createRoomType;
}

+ (id)sharedAdapter;
@property(nonatomic) unsigned long long createRoomType; // @synthesize createRoomType=_createRoomType;
@property(retain, nonatomic) id <IESLiveVerifyConfig> verifyConfig; // @synthesize verifyConfig=_verifyConfig;
@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) id <IESLiveCreateRoomPreCheckService> preCheckService; // @synthesize preCheckService=_preCheckService;
@property(retain, nonatomic) id <IESLiveGuideShopFactory> guideShopFactory; // @synthesize guideShopFactory=_guideShopFactory;
@property(retain, nonatomic) HTSHotsoonRoomAPI *api; // @synthesize api=_api;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
- (void).cxx_destruct;
- (_Bool)isValidRoom:(id)arg1;
- (void)handleCreateRoomError:(id)arg1 checkInfo:(id)arg2;
- (void)roomCreated:(id)arg1 withError:(id)arg2 checkInfo:(id)arg3 mediaType:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)createGameLivingRoomWithTitle:(id)arg1 gameModel:(id)arg2 coverURI:(id)arg3 enableShop:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)create3rdPartyRoomWithTitle:(id)arg1 coverURI:(id)arg2 tagModel:(id)arg3 enableShop:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)createVideoRoomWithTitle:(id)arg1 coverURI:(id)arg2 tagModel:(id)arg3 enableShop:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)createAudioRoomWithTitle:(id)arg1 coverURI:(id)arg2 tagModel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end

