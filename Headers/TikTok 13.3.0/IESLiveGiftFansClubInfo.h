//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface IESLiveGiftFansClubInfo : MTLModel <MTLJSONSerializing>
{
    long long _minLevel;
    long long _insertPos;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long insertPos; // @synthesize insertPos=_insertPos;
@property(nonatomic) long long minLevel; // @synthesize minLevel=_minLevel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

