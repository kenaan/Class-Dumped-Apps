//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWESearchAdStarEndorsementModel, NSArray, NSDictionary, NSString;

@protocol AWEGeneralSearchCellControllerProtocol <NSObject>

@optional
@property(copy, nonatomic) NSDictionary *logPassback;
@property(copy, nonatomic) NSString *enterFrom;
- (void)refreshWithData:(NSArray *)arg1 keyword:(NSString *)arg2 logPassback:(NSDictionary *)arg3 hasMore:(_Bool)arg4;
- (void)refreshWithData:(NSArray *)arg1 keyword:(NSString *)arg2 endorseModel:(AWESearchAdStarEndorsementModel *)arg3;
- (void)refreshWithData:(NSArray *)arg1 keyword:(NSString *)arg2 hasMore:(_Bool)arg3;
@end

