//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array;

@interface EnumRules : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int const_p; // @dynamic const_p;
@property(nonatomic) _Bool definedOnly; // @dynamic definedOnly;
@property(nonatomic) _Bool hasConst_p; // @dynamic hasConst_p;
@property(nonatomic) _Bool hasDefinedOnly; // @dynamic hasDefinedOnly;
@property(retain, nonatomic) GPBInt32Array *inArray; // @dynamic inArray;
@property(readonly, nonatomic) unsigned long long inArray_Count; // @dynamic inArray_Count;
@property(retain, nonatomic) GPBInt32Array *notInArray; // @dynamic notInArray;
@property(readonly, nonatomic) unsigned long long notInArray_Count; // @dynamic notInArray_Count;

@end

