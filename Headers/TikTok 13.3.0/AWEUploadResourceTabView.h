//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIButton, UIColor;

@interface AWEUploadResourceTabView : UIView
{
    _Bool _isEliteVersion;
    CDUnknownBlockType _clickedTabBlock;
    NSArray *_namesOfTabs;
    NSMutableArray *_tabs;
    long long _numberOfTabs;
    UIButton *_currentChooseTab;
    UIView *_bottomLine;
    UIView *_topSepLine;
    UIColor *_titlefromColor;
    UIColor *_titleToColor;
}

@property(retain, nonatomic) UIColor *titleToColor; // @synthesize titleToColor=_titleToColor;
@property(retain, nonatomic) UIColor *titlefromColor; // @synthesize titlefromColor=_titlefromColor;
@property(nonatomic) _Bool isEliteVersion; // @synthesize isEliteVersion=_isEliteVersion;
@property(retain, nonatomic) UIView *topSepLine; // @synthesize topSepLine=_topSepLine;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIButton *currentChooseTab; // @synthesize currentChooseTab=_currentChooseTab;
@property(nonatomic) long long numberOfTabs; // @synthesize numberOfTabs=_numberOfTabs;
@property(retain, nonatomic) NSMutableArray *tabs; // @synthesize tabs=_tabs;
@property(retain, nonatomic) NSArray *namesOfTabs; // @synthesize namesOfTabs=_namesOfTabs;
@property(copy, nonatomic) CDUnknownBlockType clickedTabBlock; // @synthesize clickedTabBlock=_clickedTabBlock;
- (void).cxx_destruct;
- (void)changeColor:(id)arg1 color:(id)arg2;
- (void)p_clickedTab:(id)arg1 WithAnimation:(_Bool)arg2;
- (void)clickedTab:(id)arg1;
- (void)hideBottomLine:(_Bool)arg1;
- (void)clickByCodeWithTabNum:(long long)arg1;
- (long long)currentIndex;
- (double)recommendHeight;
- (id)initWithEliteVersion:(_Bool)arg1;
- (void)layoutSubviews;

@end

