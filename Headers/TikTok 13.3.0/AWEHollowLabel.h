//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont;

@interface AWEHollowLabel : UIView
{
    UIColor *_fillColor;
    double _cornerRadius;
    UIFont *_textFont;
    UIColor *_textColor;
    double _maxWidth;
    NSString *_text;
    struct UIEdgeInsets _textInsets;
}

+ (_Bool)replaceOperationAvailableForRange:(struct _NSRange)arg1 inText:(id)arg2;
+ (id)stringByTruncatingString:(id)arg1 toWidth:(double)arg2 withFont:(id)arg3;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(nonatomic) struct UIEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void).cxx_destruct;
- (struct CGSize)labelSize;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

