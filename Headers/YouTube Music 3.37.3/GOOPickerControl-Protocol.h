//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GOODatePickerColorPalette, NSDate;

@protocol GOOPickerControl <NSObject>
@property(nonatomic) _Bool hapticsEnabled;
@property(retain, nonatomic) NSDate *maximumDate;
@property(retain, nonatomic) NSDate *minimumDate;
@property(retain, nonatomic) NSDate *date;
@property(retain, nonatomic) GOODatePickerColorPalette *colorPalette;
@property(nonatomic) long long style;
@end
