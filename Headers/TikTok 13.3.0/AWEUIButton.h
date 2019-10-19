//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface AWEUIButton : UIButton
{
    _Bool _needChangeAlphaWhenPressed;
    _Bool _needHighlightAnimation;
    _Bool _usingConstColor;
    double _selectedAlpha;
    CDUnknownBlockType _tappedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType tappedBlock; // @synthesize tappedBlock=_tappedBlock;
@property(nonatomic) double selectedAlpha; // @synthesize selectedAlpha=_selectedAlpha;
@property(nonatomic) _Bool usingConstColor; // @synthesize usingConstColor=_usingConstColor;
@property(nonatomic) _Bool needHighlightAnimation; // @synthesize needHighlightAnimation=_needHighlightAnimation;
@property(nonatomic) _Bool needChangeAlphaWhenPressed; // @synthesize needChangeAlphaWhenPressed=_needChangeAlphaWhenPressed;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;

@end

