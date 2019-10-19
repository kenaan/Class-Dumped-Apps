//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GPBSourceContext, NSMutableArray, NSString;

@interface GMSx_GPBApi : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSourceContext; // @dynamic hasSourceContext;
@property(retain, nonatomic) NSMutableArray *methodsArray; // @dynamic methodsArray;
@property(readonly, nonatomic) unsigned long long methodsArray_Count; // @dynamic methodsArray_Count;
@property(retain, nonatomic) NSMutableArray *mixinsArray; // @dynamic mixinsArray;
@property(readonly, nonatomic) unsigned long long mixinsArray_Count; // @dynamic mixinsArray_Count;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSMutableArray *optionsArray; // @dynamic optionsArray;
@property(readonly, nonatomic) unsigned long long optionsArray_Count; // @dynamic optionsArray_Count;
@property(retain, nonatomic) GMSx_GPBSourceContext *sourceContext; // @dynamic sourceContext;
@property(nonatomic) int syntax; // @dynamic syntax;
@property(copy, nonatomic) NSString *version; // @dynamic version;

@end

