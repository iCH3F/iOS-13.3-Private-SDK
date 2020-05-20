//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSString, NSURL;

@interface DMFBookmark : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;
    NSURL *_URL;
    NSArray *_children;
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)leafBookmarkWithName:(id)arg1 URL:(id)arg2;
+ (id)folderWithName:(id)arg1 children:(id)arg2 identifier:(id)arg3;
+ (id)folderWithName:(id)arg1 children:(id)arg2;
+ (id)readingListFolderWithChildren:(id)arg1;
+ (id)favoritesFolderWithChildren:(id)arg1;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSArray *children; // @synthesize children=_children;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)_isFolderWithIdentifier:(id)arg1;
@property(readonly, nonatomic, getter=isReadingListFolder) BOOL readingListFolder;
@property(readonly, nonatomic, getter=isFavoritesFolder) BOOL favoritesFolder;
@property(readonly, nonatomic, getter=isFolder) BOOL folder;
- (id)initWithName:(id)arg1 URL:(id)arg2 children:(id)arg3 identifier:(id)arg4;

@end

