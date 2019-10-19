//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEUserModel, NSString;

@protocol AWEInviteUserTableViewCellProtocol <NSObject>
@property(copy, nonatomic) NSString *enterFrom;
@property(copy, nonatomic) CDUnknownBlockType contactBlock;
@property(copy, nonatomic) CDUnknownBlockType followBlock;
@property(copy, nonatomic) CDUnknownBlockType clickAwemeItemBlock;
@property(copy, nonatomic) CDUnknownBlockType dislikeHandler;
@property(copy, nonatomic) CDUnknownBlockType nameBtnBlock;
@property(copy, nonatomic) CDUnknownBlockType avatarBtnBlock;
@property(copy, nonatomic) CDUnknownBlockType followBtnBlock;

@optional
+ (double)showAwemeItemsHeight;
+ (double)suggestedHeightWithUser:(AWEUserModel *)arg1 showMoreStyle:(_Bool)arg2;
+ (double)suggestedHeight;
- (void)configWithUser:(AWEUserModel *)arg1 isNewFriends:(_Bool)arg2 showMoreStyle:(_Bool)arg3;
- (void)configWithUser:(AWEUserModel *)arg1;
@end

