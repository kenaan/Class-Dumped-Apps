//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface AWEOrangeStoryDetailGuideView : UIView
{
    _Bool _showing;
    CDUnknownBlockType _dismissBlock;
}

+ (long long)enterStoryDetailTimes;
+ (void)enterTimesPlus;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(nonatomic) _Bool showing; // @synthesize showing=_showing;
- (void).cxx_destruct;
- (id)clickImageView;
- (id)labelFromText:(id)arg1;
- (id)horizolScrollImageView;
- (void)dismiss;
- (void)show;
- (id)initWithFrame:(struct CGRect)arg1;

@end

