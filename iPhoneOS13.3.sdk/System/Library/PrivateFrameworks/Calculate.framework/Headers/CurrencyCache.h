//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSDictionary, NSMutableDictionary, NSMutableString, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface CurrencyCache : NSObject <NSXMLParserDelegate>
{
    NSUInteger _uuid;
    NSDate *_lastRefreshDate;
    NSDictionary *_currencyData;
    NSString *_currentCurrency;
    NSNumber *_currentRate;
    NSMutableString *_currentString;
    NSMutableDictionary *_mutableCurrencyCache;
    NSObject<OS_dispatch_queue> *_serializer;
}

+ (id)shared;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serializer; // @synthesize serializer=_serializer;
@property(retain, nonatomic) NSDictionary *currencyData; // @synthesize currencyData=_currencyData;
@property(readonly) NSUInteger uuid; // @synthesize uuid=_uuid;
- (BOOL)updateCurrencyCacheWithData:(id)arg1;
- (void)_queue_loadPersistedCurrencyCache;
- (void)_loadPersistedCurrencyCache;
- (void)_queue_persistCurrencyCache;
- (BOOL)_queue_refresh;
- (id)createCredential;
- (id)_consumerKey;
- (id)_consumerSecret;
@property(readonly, nonatomic) NSDate *lastRefreshDate;
- (BOOL)refreshWithTimeOut:(float)arg1;
- (BOOL)refresh;
- (void)dealloc;
- (id)init;

@end

