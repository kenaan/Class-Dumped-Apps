//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GMSTileCoords, GMSTileType, NSArray;
@protocol GMSTileExpirationState;

@protocol GMSTile <NSObject>
- (_Bool)isTileStoreTile;
- (void)refreshValidationTime:(long long)arg1;
- (void)refreshServerPerTileEpoch:(int)arg1 validationTime:(long long)arg2;
- (int)serverPerTileEpoch;
- (int)perTileEpoch;
- (int)copyrightYear;
- (NSArray *)imageryCopyrights;
- (NSArray *)mapDataCopyrights;
- (id <GMSTileExpirationState>)expirationState;
- (int)dataVersion;
- (GMSTileType *)tileType;
- (GMSTileCoords *)coords;
@end

