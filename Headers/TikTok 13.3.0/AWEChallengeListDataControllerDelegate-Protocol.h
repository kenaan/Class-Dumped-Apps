//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSString;

@protocol AWEChallengeListDataControllerDelegate <NSObject>
@property(retain, nonatomic) NSMutableArray *adFilteredDataSource;
@property(nonatomic) unsigned long long sortType;
@property(copy, nonatomic) NSString *hashtagName;
@property(copy, nonatomic) NSString *challengeID;
- (void)resetData;
- (long long)convertIndexToOrigin:(long long)arg1;
@end

