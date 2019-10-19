//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESLiveFaceStickerCategoryModel, NSMutableArray;
@protocol IESLiveEnvironment;

@interface IESLiveFaceStickerViewModel : NSObject
{
    NSMutableArray *_categories;
    IESLiveFaceStickerCategoryModel *_categoryModel;
    id <IESLiveEnvironment> _appTarget;
}

@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) IESLiveFaceStickerCategoryModel *categoryModel; // @synthesize categoryModel=_categoryModel;
@property(copy, nonatomic) NSMutableArray *categories; // @synthesize categories=_categories;
- (void).cxx_destruct;
- (void)removeFavoriteEffect:(id)arg1;
- (void)addFavoriteEffect:(id)arg1;
- (id)initWithResponseModel:(id)arg1 favoriteEffects:(id)arg2;

@end

