//
//  MBMArtist.h
//  FavoriteArtists
//
//  Created by Michael on 3/20/20.
//  Copyright © 2020 Michael. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MBMArtist : NSObject

// MARK: - Properties
@property (nonatomic, copy) NSString *artistName;
@property (nonatomic) int yearFormed;
@property (nonatomic, copy)NSString *artistBiography;

// MARK: - Methods (init)

- (instancetype)initWithArtistName:(NSString *)artistName
                        yearFormed:(int)yearFormed
                   artistBiography:(NSString *)artistBiography;

@end

NS_ASSUME_NONNULL_END
