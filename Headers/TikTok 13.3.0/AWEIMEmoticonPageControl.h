//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface AWEIMEmoticonPageControl : UIView
{
    _Bool _showRecentPage;
    long long _numberOfPages;
    long long _currentPage;
    NSMutableArray *_pageArray;
}

@property(retain, nonatomic) NSMutableArray *pageArray; // @synthesize pageArray=_pageArray;
@property(nonatomic) _Bool showRecentPage; // @synthesize showRecentPage=_showRecentPage;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

