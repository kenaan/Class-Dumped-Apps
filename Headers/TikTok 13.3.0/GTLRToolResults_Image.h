//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRToolResults_Status, GTLRToolResults_Thumbnail, GTLRToolResults_ToolOutputReference, NSString;

@interface GTLRToolResults_Image : GTLRObject
{
}


// Remaining properties
@property(retain, nonatomic) GTLRToolResults_Status *error; // @dynamic error;
@property(retain, nonatomic) GTLRToolResults_ToolOutputReference *sourceImage; // @dynamic sourceImage;
@property(copy, nonatomic) NSString *stepId; // @dynamic stepId;
@property(retain, nonatomic) GTLRToolResults_Thumbnail *thumbnail; // @dynamic thumbnail;
@end

