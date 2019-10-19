//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRShoppingContent_Price, NSArray, NSString;

@interface GTLRShoppingContent_OrderLineItemProduct : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;
+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *brand; // @dynamic brand;
@property(copy, nonatomic) NSString *channel; // @dynamic channel;
@property(copy, nonatomic) NSString *condition; // @dynamic condition;
@property(copy, nonatomic) NSString *contentLanguage; // @dynamic contentLanguage;
@property(copy, nonatomic) NSString *gtin; // @dynamic gtin;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *imageLink; // @dynamic imageLink;
@property(copy, nonatomic) NSString *itemGroupId; // @dynamic itemGroupId;
@property(copy, nonatomic) NSString *mpn; // @dynamic mpn;
@property(copy, nonatomic) NSString *offerId; // @dynamic offerId;
@property(retain, nonatomic) GTLRShoppingContent_Price *price; // @dynamic price;
@property(copy, nonatomic) NSString *shownImage; // @dynamic shownImage;
@property(copy, nonatomic) NSString *targetCountry; // @dynamic targetCountry;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSArray *variantAttributes; // @dynamic variantAttributes;

@end

