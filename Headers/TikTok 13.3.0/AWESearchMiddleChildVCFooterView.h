//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UILabel;

@interface AWESearchMiddleChildVCFooterView : UITableViewHeaderFooterView
{
    long long _type;
    CDUnknownBlockType _clickButtonBlock;
    UILabel *_descLabel;
}

+ (id)identifier;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(copy, nonatomic) CDUnknownBlockType clickButtonBlock; // @synthesize clickButtonBlock=_clickButtonBlock;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)onDescLabelClicked;
- (void)configUI;
- (id)initWithReuseIdentifier:(id)arg1;

@end

