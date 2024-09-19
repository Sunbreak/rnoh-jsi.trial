import * as React from 'react';

import { StyleSheet, View, Text } from 'react-native';
import CxxTurbo from 'react-native-cxx-turbo/src/NativeCxxTurbo';

const result = CxxTurbo.multiply(3, 7);

export default function App() {
  return (
    <View style={styles.container}>
      <Text>Result: {result}</Text>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    alignItems: 'center',
    justifyContent: 'center',
  },
  box: {
    width: 60,
    height: 60,
    marginVertical: 20,
  },
});