//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSLiveApi.h"

@class LiveRoomModel;

@interface IESLiveRecordStateApi : HTSLiveApi
{
    LiveRoomModel *_room;
}

@property(retain, nonatomic) LiveRoomModel *room; // @synthesize room=_room;
- (void).cxx_destruct;
- (void)state:(long long)arg1 finishType:(long long)arg2 finished:(CDUnknownBlockType)arg3;
- (id)initWithRoom:(id)arg1;

@end

