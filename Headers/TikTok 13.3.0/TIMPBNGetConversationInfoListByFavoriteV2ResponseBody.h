//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface TIMPBNGetConversationInfoListByFavoriteV2ResponseBody : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *conversationInfoListArray; // @dynamic conversationInfoListArray;
@property(readonly, nonatomic) unsigned long long conversationInfoListArray_Count; // @dynamic conversationInfoListArray_Count;
@property(nonatomic) _Bool hasHasMore; // @dynamic hasHasMore;
@property(nonatomic) _Bool hasMore; // @dynamic hasMore;
@property(nonatomic) _Bool hasNextCursor; // @dynamic hasNextCursor;
@property(nonatomic) long long nextCursor; // @dynamic nextCursor;

@end

