//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface RTLabelComponentsStructure : NSObject
{
    NSArray *components_;
    NSString *plainTextData_;
    NSArray *linkComponents_;
    NSArray *imgComponents_;
    NSString *_originTextData;
}

@property(copy, nonatomic) NSString *originTextData; // @synthesize originTextData=_originTextData;
@property(retain, nonatomic) NSArray *imgComponents; // @synthesize imgComponents=imgComponents_;
@property(retain, nonatomic) NSArray *linkComponents; // @synthesize linkComponents=linkComponents_;
@property(copy, nonatomic) NSString *plainTextData; // @synthesize plainTextData=plainTextData_;
@property(retain, nonatomic) NSArray *components; // @synthesize components=components_;
- (void).cxx_destruct;
- (void)dealloc;

@end

