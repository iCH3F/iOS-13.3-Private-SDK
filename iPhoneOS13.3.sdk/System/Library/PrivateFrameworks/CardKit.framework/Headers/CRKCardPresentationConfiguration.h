//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CRSCardRequest;
@protocol CRContent;

@interface CRKCardPresentationConfiguration : NSObject
{
    BOOL _respectsUserConsent;
    BOOL _loadsBundleProviders;
    CRSCardRequest *_cardRequest;
}

@property(nonatomic) BOOL loadsBundleProviders; // @synthesize loadsBundleProviders=_loadsBundleProviders;
@property(nonatomic) BOOL respectsUserConsent; // @synthesize respectsUserConsent=_respectsUserConsent;
@property(readonly, nonatomic) CRSCardRequest *cardRequest; // @synthesize cardRequest=_cardRequest;
// - (void).cxx_destruct;
@property(readonly, nonatomic) id <CRContent> content;
- (id)initWithCardRequest:(id)arg1;
- (id)initWithContent:(id)arg1;
- (id)initWithCard:(id)arg1;

@end

