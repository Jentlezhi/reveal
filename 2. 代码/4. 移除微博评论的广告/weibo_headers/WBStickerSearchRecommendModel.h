//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WBStickerSearchRecommendModel : NSObject
{
    NSString *_recommendID;
    NSString *_copywriter;
    NSArray *_tags;
}

@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *copywriter; // @synthesize copywriter=_copywriter;
@property(retain, nonatomic) NSString *recommendID; // @synthesize recommendID=_recommendID;
- (void).cxx_destruct;
- (id)dictModel;
- (id)initWithDict:(id)arg1;

@end

