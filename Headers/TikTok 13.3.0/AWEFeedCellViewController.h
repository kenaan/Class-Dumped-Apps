//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEAwemeBaseViewController.h"

#import "AWEFeedTableViewCellViewControllerProtocol-Protocol.h"

@class AWEAwemeModel, NSString;

@interface AWEFeedCellViewController : AWEAwemeBaseViewController <AWEFeedTableViewCellViewControllerProtocol>
{
    CDUnknownBlockType clickBlock;
    long long indexPath;
}

@property(nonatomic) long long indexPath; // @synthesize indexPath;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock;
- (void).cxx_destruct;
- (_Bool)isLikeUserListShowing;
- (_Bool)isCommentListShowing;
- (id)initWithMediaType:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) AWEAwemeModel *model;
@property(copy, nonatomic) NSString *referString;
@property(readonly) Class superclass;
@property(nonatomic) long long type;

@end

