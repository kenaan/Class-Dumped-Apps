//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCATalkCallEventBase : SCAUserTrackedEvent
{
}

- (void)setWithGroup:(_Bool)arg1;
- (void)setWithCallKitDisableDueToNotLocationAuthorisation:(_Bool)arg1;
- (void)setWithCallKit:(_Bool)arg1;
- (void)setSubpageName:(id)arg1;
- (void)setServerRankingId:(id)arg1;
- (void)setRankingModelId:(id)arg1;
- (void)setRankingId:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setMediaToggleCount:(long long)arg1;
- (void)setGroupParticipantCount:(long long)arg1;
- (void)setGhost_correspondent_id:(id)arg1;
- (void)setFriendshipStatus:(long long)arg1;
- (void)setDurationSec:(double)arg1;
- (void)setCorrespondentType:(long long)arg1;
- (void)setCorrespondentId:(id)arg1;
- (void)setChatSource:(long long)arg1;
- (void)setCellViewPosition:(long long)arg1;
- (void)setCallUuid:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end
