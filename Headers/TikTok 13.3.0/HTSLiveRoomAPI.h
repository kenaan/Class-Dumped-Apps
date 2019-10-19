//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSLiveApi.h"

@class NSNumber;
@protocol IESLiveHTTPClient;

@interface HTSLiveRoomAPI : HTSLiveApi
{
    NSNumber *_roomID;
    id <IESLiveHTTPClient> _client;
}

@property(retain, nonatomic) id <IESLiveHTTPClient> client; // @synthesize client=_client;
@property(readonly, nonatomic) NSNumber *roomID; // @synthesize roomID=_roomID;
- (void).cxx_destruct;
- (void)fetchReplayInfo:(CDUnknownBlockType)arg1;
- (void)closeAbnormalAnchorRoomFinished:(CDUnknownBlockType)arg1;
- (void)exitRoom:(CDUnknownBlockType)arg1;
- (void)enterRoomWithLogin:(_Bool)arg1 roomModel:(id)arg2 sourcePage:(id)arg3 finish:(CDUnknownBlockType)arg4;
- (void)fetchRoomInfo:(id)arg1 roomList:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchRoomInfoWithUserID:(id)arg1 secUserId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchRoomInfoWithID:(id)arg1 atPackLevel:(unsigned long long)arg2 finished:(CDUnknownBlockType)arg3;
- (void)fetchRoomInfoWithRoomID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchRoomInfoWithTimeStamp:(CDUnknownBlockType)arg1;
- (void)fetchRoomInfo:(CDUnknownBlockType)arg1;
- (id)initWithRoomID:(id)arg1;

@end

