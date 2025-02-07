//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDImageData, NSString;

@interface IDPlacemark : NSObject
{
    NSString *_descriptionText;
    IDImageData *_image;
    IDImageData *_highlightedImage;
    NSString *_placemarkId;
    unsigned long long _cachedHash;
    CDStruct_2c43369c _location;
}

+ (id)new;
@property unsigned long long cachedHash; // @synthesize cachedHash=_cachedHash;
@property(retain) NSString *placemarkId; // @synthesize placemarkId=_placemarkId;
@property(retain) IDImageData *highlightedImage; // @synthesize highlightedImage=_highlightedImage;
@property(retain) IDImageData *image; // @synthesize image=_image;
@property CDStruct_2c43369c location; // @synthesize location=_location;
@property(copy) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithLocation:(CDStruct_2c43369c)arg1;
- (id)initWithLocation:(CDStruct_2c43369c)arg1 description:(id)arg2;
- (id)initWithLocation:(CDStruct_2c43369c)arg1 description:(id)arg2 image:(id)arg3;
- (id)initWithLocation:(CDStruct_2c43369c)arg1 description:(id)arg2 image:(id)arg3 highlightedImage:(id)arg4;

@end

