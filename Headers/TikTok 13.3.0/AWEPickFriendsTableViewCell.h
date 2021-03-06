//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEUIListTableViewCell.h"

@class UIImageView, UILabel;

@interface AWEPickFriendsTableViewCell : AWEUIListTableViewCell
{
    UILabel *_nickName;
    UIImageView *_headImage;
    UIImageView *_selectView;
}

+ (double)suggestedHeight;
+ (long long)cellType;
+ (id)identifier;
@property(retain, nonatomic) UIImageView *selectView; // @synthesize selectView=_selectView;
@property(retain, nonatomic) UIImageView *headImage; // @synthesize headImage=_headImage;
@property(retain, nonatomic) UILabel *nickName; // @synthesize nickName=_nickName;
- (void).cxx_destruct;
- (void)configCellColorStyle;
- (void)configWithSelected:(_Bool)arg1 isShield:(_Bool)arg2;
- (void)configWithUserModel:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

