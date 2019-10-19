//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRShoppingContent_Installment, GTLRShoppingContent_LoyaltyPoints, GTLRShoppingContent_Price, GTLRShoppingContent_ProductShippingDimension, GTLRShoppingContent_ProductShippingWeight, GTLRShoppingContent_ProductUnitPricingBaseMeasure, GTLRShoppingContent_ProductUnitPricingMeasure, NSArray, NSNumber, NSString;

@interface GTLRShoppingContent_Product : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;
+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(retain, nonatomic) NSArray *additionalImageLinks; // @dynamic additionalImageLinks;
@property(retain, nonatomic) NSArray *additionalProductTypes; // @dynamic additionalProductTypes;
@property(retain, nonatomic) NSNumber *adult; // @dynamic adult;
@property(copy, nonatomic) NSString *adwordsGrouping; // @dynamic adwordsGrouping;
@property(retain, nonatomic) NSArray *adwordsLabels; // @dynamic adwordsLabels;
@property(copy, nonatomic) NSString *adwordsRedirect; // @dynamic adwordsRedirect;
@property(copy, nonatomic) NSString *ageGroup; // @dynamic ageGroup;
@property(retain, nonatomic) NSArray *aspects; // @dynamic aspects;
@property(copy, nonatomic) NSString *availability; // @dynamic availability;
@property(copy, nonatomic) NSString *availabilityDate; // @dynamic availabilityDate;
@property(copy, nonatomic) NSString *brand; // @dynamic brand;
@property(copy, nonatomic) NSString *channel; // @dynamic channel;
@property(copy, nonatomic) NSString *color; // @dynamic color;
@property(copy, nonatomic) NSString *condition; // @dynamic condition;
@property(copy, nonatomic) NSString *contentLanguage; // @dynamic contentLanguage;
@property(retain, nonatomic) NSArray *customAttributes; // @dynamic customAttributes;
@property(retain, nonatomic) NSArray *customGroups; // @dynamic customGroups;
@property(copy, nonatomic) NSString *customLabel0; // @dynamic customLabel0;
@property(copy, nonatomic) NSString *customLabel1; // @dynamic customLabel1;
@property(copy, nonatomic) NSString *customLabel2; // @dynamic customLabel2;
@property(copy, nonatomic) NSString *customLabel3; // @dynamic customLabel3;
@property(copy, nonatomic) NSString *customLabel4; // @dynamic customLabel4;
@property(copy, nonatomic) NSString *descriptionProperty; // @dynamic descriptionProperty;
@property(retain, nonatomic) NSArray *destinations; // @dynamic destinations;
@property(copy, nonatomic) NSString *displayAdsId; // @dynamic displayAdsId;
@property(copy, nonatomic) NSString *displayAdsLink; // @dynamic displayAdsLink;
@property(retain, nonatomic) NSArray *displayAdsSimilarIds; // @dynamic displayAdsSimilarIds;
@property(copy, nonatomic) NSString *displayAdsTitle; // @dynamic displayAdsTitle;
@property(retain, nonatomic) NSNumber *displayAdsValue; // @dynamic displayAdsValue;
@property(copy, nonatomic) NSString *energyEfficiencyClass; // @dynamic energyEfficiencyClass;
@property(copy, nonatomic) NSString *expirationDate; // @dynamic expirationDate;
@property(copy, nonatomic) NSString *gender; // @dynamic gender;
@property(copy, nonatomic) NSString *googleProductCategory; // @dynamic googleProductCategory;
@property(copy, nonatomic) NSString *gtin; // @dynamic gtin;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSNumber *identifierExists; // @dynamic identifierExists;
@property(copy, nonatomic) NSString *imageLink; // @dynamic imageLink;
@property(retain, nonatomic) GTLRShoppingContent_Installment *installment; // @dynamic installment;
@property(retain, nonatomic) NSNumber *isBundle; // @dynamic isBundle;
@property(copy, nonatomic) NSString *itemGroupId; // @dynamic itemGroupId;
@property(copy, nonatomic) NSString *kind; // @dynamic kind;
@property(copy, nonatomic) NSString *link; // @dynamic link;
@property(retain, nonatomic) GTLRShoppingContent_LoyaltyPoints *loyaltyPoints; // @dynamic loyaltyPoints;
@property(copy, nonatomic) NSString *material; // @dynamic material;
@property(copy, nonatomic) NSString *mobileLink; // @dynamic mobileLink;
@property(copy, nonatomic) NSString *mpn; // @dynamic mpn;
@property(retain, nonatomic) NSNumber *multipack; // @dynamic multipack;
@property(copy, nonatomic) NSString *offerId; // @dynamic offerId;
@property(retain, nonatomic) NSNumber *onlineOnly; // @dynamic onlineOnly;
@property(copy, nonatomic) NSString *pattern; // @dynamic pattern;
@property(retain, nonatomic) GTLRShoppingContent_Price *price; // @dynamic price;
@property(copy, nonatomic) NSString *productType; // @dynamic productType;
@property(retain, nonatomic) NSArray *promotionIds; // @dynamic promotionIds;
@property(retain, nonatomic) GTLRShoppingContent_Price *salePrice; // @dynamic salePrice;
@property(copy, nonatomic) NSString *salePriceEffectiveDate; // @dynamic salePriceEffectiveDate;
@property(retain, nonatomic) NSNumber *sellOnGoogleQuantity; // @dynamic sellOnGoogleQuantity;
@property(retain, nonatomic) NSArray *shipping; // @dynamic shipping;
@property(retain, nonatomic) GTLRShoppingContent_ProductShippingDimension *shippingHeight; // @dynamic shippingHeight;
@property(copy, nonatomic) NSString *shippingLabel; // @dynamic shippingLabel;
@property(retain, nonatomic) GTLRShoppingContent_ProductShippingDimension *shippingLength; // @dynamic shippingLength;
@property(retain, nonatomic) GTLRShoppingContent_ProductShippingWeight *shippingWeight; // @dynamic shippingWeight;
@property(retain, nonatomic) GTLRShoppingContent_ProductShippingDimension *shippingWidth; // @dynamic shippingWidth;
@property(copy, nonatomic) NSString *sizeSystem; // @dynamic sizeSystem;
@property(copy, nonatomic) NSString *sizeType; // @dynamic sizeType;
@property(retain, nonatomic) NSArray *sizes; // @dynamic sizes;
@property(copy, nonatomic) NSString *targetCountry; // @dynamic targetCountry;
@property(retain, nonatomic) NSArray *taxes; // @dynamic taxes;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) GTLRShoppingContent_ProductUnitPricingBaseMeasure *unitPricingBaseMeasure; // @dynamic unitPricingBaseMeasure;
@property(retain, nonatomic) GTLRShoppingContent_ProductUnitPricingMeasure *unitPricingMeasure; // @dynamic unitPricingMeasure;
@property(retain, nonatomic) NSArray *validatedDestinations; // @dynamic validatedDestinations;
@property(retain, nonatomic) NSArray *warnings; // @dynamic warnings;

@end

