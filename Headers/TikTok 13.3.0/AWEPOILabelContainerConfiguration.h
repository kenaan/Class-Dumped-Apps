//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface AWEPOILabelContainerConfiguration : NSObject
{
    UIColor *_textColor;
    UIFont *_textFont;
    UIColor *_separatorColor;
    double _textSpace;
    struct CGSize _separatorSize;
    struct UIEdgeInsets _edgeInsets;
}

+ (id)defaultConfiguration;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) double textSpace; // @synthesize textSpace=_textSpace;
@property(nonatomic) struct CGSize separatorSize; // @synthesize separatorSize=_separatorSize;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;

@end

