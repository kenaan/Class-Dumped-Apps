//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWECommonSearchBar, UILabel;

@interface AWEContactListTableViewHeader : UIView
{
    _Bool _showAllFollower;
    AWECommonSearchBar *_searchBar;
    UIView *_separator;
    UILabel *_titleLabel;
    double _suggestedHeight;
}

@property(nonatomic) double suggestedHeight; // @synthesize suggestedHeight=_suggestedHeight;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(nonatomic) _Bool showAllFollower; // @synthesize showAllFollower=_showAllFollower;
@property(retain, nonatomic) AWECommonSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

