//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;
@protocol IESLiveEnvironment;

@interface HTSLiveAddCoverImageView : UIView
{
    UIImageView *_coverImageView;
    UILabel *_titleLabel;
    id <IESLiveEnvironment> _appTarget;
}

@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (void)forceUpdateHint:(id)arg1;
- (void)setCoverImageStatus:(long long)arg1;
- (void)setCoverImageWithURLs:(id)arg1;
- (void)setCoverImage:(id)arg1;
- (void)renderUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

