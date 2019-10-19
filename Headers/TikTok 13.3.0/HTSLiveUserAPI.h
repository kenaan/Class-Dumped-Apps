//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSLiveApi.h"

@class LiveRoomModel;
@protocol IESLiveEnvironment, IESLiveRoomService, IESLiveUserService;

@interface HTSLiveUserAPI : HTSLiveApi
{
    LiveRoomModel *_room;
    id <IESLiveRoomService> _roomService;
    id <IESLiveEnvironment> _appTarget;
    id <IESLiveUserService> _userService;
}

@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) id <IESLiveRoomService> roomService; // @synthesize roomService=_roomService;
@property(retain, nonatomic) LiveRoomModel *room; // @synthesize room=_room;
- (void).cxx_destruct;
- (void)changeFollowStatusToUser:(id)arg1 secToUser:(id)arg2 roomID:(id)arg3 isFollow:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_fetchUserInfoWithParams:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)fetchUserInfo:(id)arg1 secTargetUid:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)fetchUserInfo:(id)arg1 secTargetUid:(id)arg2 room:(id)arg3 requestFrom:(id)arg4 finished:(CDUnknownBlockType)arg5;
- (void)fetchUserInfo:(id)arg1 secTargetUid:(id)arg2 roomID:(id)arg3 requestFrom:(id)arg4 finished:(CDUnknownBlockType)arg5;
- (void)fetchFansMedalWithOffset:(unsigned long long)arg1 count:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)selectFansMedal:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)unKickout:(id)arg1 roomID:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)fetchKickOutUsers:(id)arg1 offset:(id)arg2 count:(id)arg3 finished:(CDUnknownBlockType)arg4;
- (void)kickout:(id)arg1 roomID:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)fetchAdministrators:(id)arg1 secAnchorID:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)changeAdministrateStatus:(id)arg1 setAdmin:(_Bool)arg2 finished:(CDUnknownBlockType)arg3;
- (void)unbanUser:(id)arg1 roomID:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)banUser:(id)arg1 roomID:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)fetchBanUsers:(id)arg1 offset:(id)arg2 count:(id)arg3 finished:(CDUnknownBlockType)arg4;
- (void)changePushSettingStatus:(id)arg1 status:(_Bool)arg2 finished:(CDUnknownBlockType)arg3;
- (id)initWithRoom:(id)arg1;

@end

