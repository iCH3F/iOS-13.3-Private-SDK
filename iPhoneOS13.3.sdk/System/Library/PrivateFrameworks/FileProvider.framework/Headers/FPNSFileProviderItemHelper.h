//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

__attribute__((visibility("hidden")))
@interface FPNSFileProviderItemHelper : NSObject <NSFileProviderItem>
{
    NSString *itemIdentifier;
    NSString *parentItemIdentifier;
    NSString *filename;
    NSString *typeIdentifier;
    NSUInteger capabilities;
}

@property(readonly, nonatomic) NSUInteger capabilities; // @synthesize capabilities;
@property(readonly, copy, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier;
@property(readonly, copy, nonatomic) NSString *filename; // @synthesize filename;
@property(readonly, copy, nonatomic) NSString *parentItemIdentifier; // @synthesize parentItemIdentifier;
@property(readonly, copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier;
// - (void).cxx_destruct;
- (id)fp_sharingCurrentUserPermissions;
- (id)fp_sharingCurrentUserRole;
- (BOOL)fp_isWritable;
- (BOOL)fp_isReadable;
- (id)fp_downloadingStatus;

@end

