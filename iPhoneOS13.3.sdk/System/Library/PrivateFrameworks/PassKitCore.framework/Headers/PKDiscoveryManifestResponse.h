//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKDiscoveryWebServiceResponse.h>

@class PKDiscoveryManifest;

@interface PKDiscoveryManifestResponse : PKDiscoveryWebServiceResponse
{
    PKDiscoveryManifest *_manifest;
}

@property(readonly, nonatomic) PKDiscoveryManifest *manifest; // @synthesize manifest=_manifest;
// - (void).cxx_destruct;
- (id)initWithManifest:(id)arg1;
- (id)initWithData:(id)arg1;

@end

