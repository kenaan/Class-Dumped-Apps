//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AWEUserFavoriteDataManager : NSObject
{
    _Bool _isRequestOnAir;
    NSArray *_data;
}

@property(nonatomic) _Bool isRequestOnAir; // @synthesize isRequestOnAir=_isRequestOnAir;
@property(copy, nonatomic) NSArray *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)p_updateDataWithResponse:(id)arg1;
- (void)fetchfavoritesDataWithCompletion:(CDUnknownBlockType)arg1;

@end

