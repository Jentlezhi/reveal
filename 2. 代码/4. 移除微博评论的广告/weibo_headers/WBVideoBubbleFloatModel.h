//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@interface WBVideoBubbleFloatModel : WBModelObject
{
    float _timeFloat;
    long long _showType;
    long long _timeType;
}

+ (id)mockFloats;
@property(nonatomic) long long timeType; // @synthesize timeType=_timeType;
@property(nonatomic) float timeFloat; // @synthesize timeFloat=_timeFloat;
@property(nonatomic) long long showType; // @synthesize showType=_showType;
- (_Bool)updateWithDictionary:(id)arg1;

@end

