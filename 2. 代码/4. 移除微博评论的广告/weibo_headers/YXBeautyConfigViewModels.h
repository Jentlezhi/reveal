//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YXBeautyConfigViewModels : NSObject
{
    NSString *_title;
    double _degree;
    long long _type;
}

+ (id)modelWithTitle:(id)arg1 degree:(double)arg2 type:(long long)arg3;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) double degree; // @synthesize degree=_degree;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

