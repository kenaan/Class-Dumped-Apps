//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JSONModel/JSONModel.h>

@class NSString;

@interface FVRLabelItem : JSONModel
{
    NSString *_name;
    NSString *_color;
    NSString *_labelId;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSString *labelId; // @synthesize labelId=_labelId;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

