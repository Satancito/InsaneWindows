#include <iostream>
#include <Insane/InsaneCryptography.h>
int main()
{
	USING_NS_INSANE_CORE;
	USING_NS_INSANE_STR;
	USING_NS_INSANE_CRYPTO;
	USING_NS_INSANE_EXCEPTION;
	SetConsoleOutputCP(CP_UTF8);

	String publickey = R"(
-----BEGIN PUBLIC KEY-----
MIICIjANBgkqhkiG9w0BAQEFAAOCAg8AMIICCgKCAgEAySzz1atLu/DkuEp93a+Z
yXea/H4La5BU9kgNvkl0Se/pyXiOQyV7lZW6BNuAg37+3jgzGfB89nv68AlpYBzv
ANTfDCBmL4QCgSeu/2y7uHOn2NKJKoMiMwWShr4kfILslrUdr5M53QHqTC5nkcbb
B4Vr713NoqUOFubPcKt96VFj6WjPxELZ3M0UDPA7KO3bw4aVehuVQ9ftzP/EW/9F
zcqOeALM4q3EFFcsLthUELkMUPgTTu4WcMLi1iWtgUxcLoRi7rQhbn5VSotpUFVQ
0ZKwu7//wO7ijLxEavjNgeRB0mhFDZV6NWyugsh65tPnWZmZ1lbaUnN6wIw6wBxr
P/WicL7tUnKRzrNcOJMqBFQvPFKs4ifeRXP18LJ/LHrbcnDqpcEDV0HytjmB1lHK
OWoW8VGwIqkuRrG1apBFnxrJA+rMqqwABCodDs8GZTNsDmuTC5o0neyIygq4U1hR
FlRUvNOxpZcUjQ3xMyQ1W70kHLPhFrTmCeQYRycm0JiVUyD/sOWvReJuxfRjluAT
WbijKCDFzmDCe7DxzH1xOC1Fglk12sU0yRNN8dw4kZh7QCwm8AnVvzh0EOvWHvip
3aMV76NTWAJgxgm7kzimE76oRROqCMrmvog74kCJ679ATHIgQPkpzyJNNIU9SiZs
kb2a9v/XwH0m1zdBLJDpi98CAwEAAQ==
-----END PUBLIC KEY-----
)";
	String privateKey = R"(
-----BEGIN PRIVATE KEY-----
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
7SP0Pay1uopwSJ2AzvpqvjIsXO9OYg==
-----END PRIVATE KEY-----
)";

	String publickey2 = R"(
<RSAKeyValue>
  <Modulus>ncJh2d1DSu8r2D0vVUMrY4LBRX//wrpnQPfdM4w3Y59v4SaHW5OXvQIaZCYKNRZ7mxh6rtLYiBLXEwqblS25guK/mkVdp0no97BAy61URQO8Wixz+oxdUJvwnRAq8/nqKHu3a/oQPLZ8MwGQTZ7chqhujao0Wt+c1xwinXtgKknBh7mVAACDschYnu70NIDfWBwO70xWp5a5j8gSSu5VyS5geTpxn/pMGs2oHpVcd/RaaLJ2FbI+2lgtUz6g+u4/l6T8hsm934U0sH17zJ2cyMevc1JwXdbE/lesrtL3Cg9bFlnX7CQlbIkU0Sg8/ANkgN6T5RGTxrlDwmVx6x3EpFUlsZvfyz23qsl7ydqxnkIsJQnBKrA/z7lY9viRauYXOB68H4YXWuth5TxBDR8ZC/FEqyUGFGbnhvKFdRBvhktKcwwq0at2TsBgaWONOpaL0rvulOquzqRSCufSOWHYSm+GJLEUmH+BFxBMDm+ALdxnJ/4gT9pU7eM4PtA8ssVg3j1M+NLgoTvaTAQZk2p5epfM1DLwMzIRbGkTggAVdvfWs+nfINZDzNtTyWYC/Dgqo6Naszq5FEw2/oYaSu10y1t+YlLRxa2xcUTEj76uJw5NCvsymJoSP2EQo9rLkGf2ivkFFiwayAs7NhuAB9lxm6Nv2LkAR0FTMjyWGTFSPHk=</Modulus>
  <Exponent>AQAB</Exponent>
</RSAKeyValue>

)";
	String privateKey2 = R"(
<RSAKeyValue>
  <Modulus>ncJh2d1DSu8r2D0vVUMrY4LBRX//wrpnQPfdM4w3Y59v4SaHW5OXvQIaZCYKNRZ7mxh6rtLYiBLXEwqblS25guK/mkVdp0no97BAy61URQO8Wixz+oxdUJvwnRAq8/nqKHu3a/oQPLZ8MwGQTZ7chqhujao0Wt+c1xwinXtgKknBh7mVAACDschYnu70NIDfWBwO70xWp5a5j8gSSu5VyS5geTpxn/pMGs2oHpVcd/RaaLJ2FbI+2lgtUz6g+u4/l6T8hsm934U0sH17zJ2cyMevc1JwXdbE/lesrtL3Cg9bFlnX7CQlbIkU0Sg8/ANkgN6T5RGTxrlDwmVx6x3EpFUlsZvfyz23qsl7ydqxnkIsJQnBKrA/z7lY9viRauYXOB68H4YXWuth5TxBDR8ZC/FEqyUGFGbnhvKFdRBvhktKcwwq0at2TsBgaWONOpaL0rvulOquzqRSCufSOWHYSm+GJLEUmH+BFxBMDm+ALdxnJ/4gT9pU7eM4PtA8ssVg3j1M+NLgoTvaTAQZk2p5epfM1DLwMzIRbGkTggAVdvfWs+nfINZDzNtTyWYC/Dgqo6Naszq5FEw2/oYaSu10y1t+YlLRxa2xcUTEj76uJw5NCvsymJoSP2EQo9rLkGf2ivkFFiwayAs7NhuAB9lxm6Nv2LkAR0FTMjyWGTFSPHk=</Modulus>
  <Exponent>AQAB</Exponent>
  <P>0BheR/+gdjbrDbUAJMYwGo9X26pAWhcMKN17UGcnehKlhURUE7MFxC44XLbAs1uoji8VE1HgXPvYqeKbjqMlQWpreArrEdbZ2POgzahZxAWwCBrqmyFC9ckSqaI9p2YmUpPZI6x4hb1z0sczU4/VUxV2mFWtYDKQbwL9R816peaIoHLi2LQeeaQkQ6FyO1z8nW2w4WdB0xIxkFm4MbxZcd7+CAzvCXp9R+f5EzEFFmYrSW99xo1UhqfNWfngRcCIZ4D6tn8jWrZ9skHAf5+QGnDulZ2PV4sbjYAbAmp6dz46rRViV2BI2v+rdzoBTeONx7LDrria2TTtrXMcU3b5Gw==</P>
  <Q>whOUW02LUwG4DzCpcz+9+pmKbVJGWE/ja0p6/dcWjbM8rZaXYg7laZbJnQwTRJRDtdkotkg7UgrvXNRAhUbxvNSb3WRb9yd8xXv78ujJqSGfP8ST6NRkSQJ3xHS7lZyQM2j4OYDxYL3xEiGtpa0f7ZZwCaSRUWu2za+nPpuxuo844MBTRgkU9vfUOPQZhasusY8dZljG9JS1eYNlQgqDB+7bj8CuTqCTp5KeHo0A0uRkv7H1mxnxl59RcD14lY9tPDlcD3OSwmBuHDqNkltV3YPGtM4ufkdG+0K9T0f92XC59Qewp3g2oj3U7pk4dAaDn0lld1qiRCUJJ/xdNArt+w==</Q>
  <DP>i54966qsO4R/UrQFQ6chcUCJnx1sjcV26Bgp+3kqeHH4UiDVFF6B2O117WbEhdJSlgsq5cqCcYCcDue2nQ4DGg/PyTvyGgcAJNrZIgL5L1btk5KTo7++UHA3ME9ldGJKBg+imZfHSVwiUOJMIp2XcGYvKugZKjjixUjJLRrFVngFZTmPz/uRkuW5WxMANKof53RIQANqm7ZSQNqhheUsUgVehYJAAykG027lo6W5Fx03n87JIaWDd9EwK1VGzyXtnxxfmoBU9TEJxsbs4/Pn2IW63fFX0lHIC7lO5eERB95dufFmCN/WIfF2Vsk5RMwPPVRIjHrZkjA746se7zUczw==</DP>
  <DQ>O6frFXmrlvNTUZACtkNksVBbBamhp+m+nS9CyR5Bd4Md5roAhIrRp/hKtvSMQ6tTeOVsp0NiwKBN3Xn87zrUedfcpVwBDOLdbpLi6lL2EgAcxGw3jv0ianLQv9mmA6IhjTv5+SsSh0s7e/hQOToTM2Pnwn8MkDuM8ILK5OrU4eS+dg+ISWHnSNb7LBqUccshykCUp+4oEexYMCbcjEVQ67JXWUPAELk5Sew+oGN1Wl4MPgSE241I/vNhBCBRHZ/90uJK0xESjp83mYPCGrfql/G2tcMe9YARaJCmQmV9uUX2U0Ru37uLB6n79u+wM7IA6YiVIPACKvI7c0gWmjW12w==</DQ>
  <InverseQ>lXysfWZ9/ZCgFhfSqS+h/ouvJfk1PxdBFSUp6DoEZdsPVY0IXkFlaET33aKSGJCAbzaLNmDa/o1HEtXfzejmZsp8RlIEdzOhvZQbge8a6r/54FfHQqeuaRSK+AF0JPIJ9bbcrtO5IA6G2y8oSLW/FX+aAIILdRE98HAPpkQCzcl2W2cy9VUzI3kKP9G2IVK6fBp5l/AJSzSCwImNzbheYqrf9tbqyCw7WVBrbniIUkl3GGG8nUsSBS/DfpgnPm9OZYm6rE2lmuNUXtLXLkNQHoVHeIDjHsb68G2v/ZlR+hGZLejvtzI8wJjmmMmv8VyJ6esKtqdcXJ9cKgOjcOoufg==</InverseQ>
  <D>BYd/mHw51JGHbt/OHeXpymYV0hLHaxLPdaZ6WUkr09ENwc1w5xPIOLavKB1xNCUilfAItMHtFu/aG+++Pj9JBj5eStDtlGRxxuSlkL31eynDW0G9muV6i827ZDXh24VB4MNdTWqJUSdwOPVwElhkEFAs98gkZ574x01UJULivviw0Mn/X+2ksAF+oatsYb62lUb+ewKo8tzEijaP9ZJe7VszxGv4+YtzSWk14ESJ5iZpWMwQeXgy3cJDbGyAher9zZnZw/ukLQZlL15mjWhky2C8VIVqLM/PPb7i7Ym1YOPi5Ginub4WlbRER4RqhsazqhSjCF9SV5+8sT6O/Jehgbblu/zIXtBdd25kIKNVkyowuBE7kyfdhxWmnwhZO/Ra03EeBo4gAHeb3RdCh0xJE7QlrwuKQEBpnydyqUgIgTspEFBqSFSjcc32u6VmwoUP4c+ai8Vz7d6QFUau+nOQDMwdpQ8GxkpUucbthfVkK8LBkGvjZayQokyp2BuIT2iQGQS6vmlD6KA8Af948C/PKeE6cUqp+IKcUypgJKwKQT3zn3tK49nzIYsFpM3SMPPYxLceFI/OIPTZOHVEYgmiwt7a/zCjzM7bq5vWsn6UFc7rr60vexFvz5TBPUYD3CVMvAc1wI7AiPx5DPpeIScP+BdgUqIKrtVN8fgOkYAJLkU=</D>
</RSAKeyValue>
)";

	String publickey3 = R"(
MIICIjANBgkqhkiG9w0BAQEFAAOCAg8AMIICCgKCAgEA0r8Jcn+J2mEuje+QPIhN+7fzlio9eBIN055WGJoIcaOZQFYJQpRZ0yI2wxzW+de+Ee5/q2uPcdH5tqt6++Si4ijzchvJ4rNt2Yje2ZFNAq7g1kyLLIs6/OI3pKZ0ILD7PEc9P81N2qhovtINr4oYx8GHeSzqBHz1pWk/KWwYR+6wk4BmJ0mtWWlkZ2RN9dH05QH4CTHYkDRYrXbu3UR/CziTo8AWuT8YFGc5kjeHOJnPkcgiktSoxda3RY51djOaeqBKTO0JcdnZAOSQM87O3bFjHFYa90UIXtjMPq5oqGCnKHyfq+A974bF++1fcRiEabOpfb1Ab8yXRnESK3Y9dm45Etz4SXdKBJaaDbU+ShXefVCCAyXVJX/7ICDcU8hN9To/M8GACTOiM8B4H2nFBWL/sUo5j0SYBMiUnNGeeqKQyB0ChpCV8BkF6xoxNfaJ86+UlHQ4x8BjdBdWVKi0S6xjkQg0vZr09/XwL53fG2Ynzi+oDk2+8POXaIFySk0epgIxh9KPXr4OH2/c4Xm+Iby9ES01LR4TjvfDbmYvwhalwjSQHU9gY7qXzVTOhZlDlnGd+dapC8bnHvY5e/GtRSUX/ZweSn0h2WzAq65Uc6vVTv7H70TmkRmCUcVxjiNaC0dCMccA8P0kvPZdEFFpGUXZuoI8Lr3cNSxq7/qLmc0CAwEAAQ==
)";
	String privateKey3 = R"(
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
)";

	//RsaKeyPair keypair = RsaExtensions::CreateRsaKeyPair(4096, RsaKeyEncoding::Ber);

	RsaKeyPair keypair1 = RsaKeyPair{ publickey, privateKey };
	RsaKeyPair keypair2 = RsaKeyPair{ publickey2, privateKey2 };
	RsaKeyPair keypair3 = RsaKeyPair{ publickey3, privateKey3 };

	std::vector<RsaKeyPair> keypairs = { keypair1, keypair2, keypair3 };

	bool indent = true;
	String data = "grape";
	String hashKeyOrSecret = "\000\001\100😀"s;
	String serializeKey = "HolaMundo"s;
	String encryptorKey = "HelloWorld";
	std::unique_ptr<IEncoder> encoder = Base64Encoder::DefaultInstance();
	HashAlgorithm hashAlgorithm = HashAlgorithm::Md5;
	RsaPadding rsaPadding = RsaPadding::OaepSha256;
	AesCbcPadding aesCbcPadding = AesCbcPadding::Pkcs7;
	RsaKeyPair rsaKeypair = keypair1;

	ShaHasher shaHasher{ hashAlgorithm, encoder->Clone() };
	auto shaHasher2 = ShaHasher::Deserialize(shaHasher.Serialize(indent));
	std::cout << shaHasher.Serialize(indent) << std::endl;
	std::cout << shaHasher2->Serialize(indent) << std::endl;
	std::cout << shaHasher.ComputeEncoded(data) << std::endl;
	std::cout << shaHasher2->ComputeEncoded(data) << std::endl;

	HmacHasher hmacHasher{ hashKeyOrSecret, hashAlgorithm, encoder->Clone() };
	auto hmacHasher2 = HmacHasher::Deserialize(hmacHasher.Serialize(indent));
	std::cout << hmacHasher.Serialize(indent) << std::endl;
	std::cout << hmacHasher2->Serialize(indent) << std::endl;
	std::cout << hmacHasher.ComputeEncoded(data) << std::endl;
	std::cout << hmacHasher2->ComputeEncoded(data) << std::endl;

	Argon2Hasher argon2Hasher{ hashKeyOrSecret,2,16384,4,Argon2Variant::Argon2i,64,encoder->Clone() };
	auto argon2Hasher2 = Argon2Hasher::Deserialize(argon2Hasher.Serialize(indent));
	std::cout << argon2Hasher.Serialize(indent) << std::endl;
	std::cout << argon2Hasher2->Serialize(indent) << std::endl;
	std::cout << argon2Hasher.ComputeEncoded(data) << std::endl;
	std::cout << argon2Hasher2->ComputeEncoded(data) << std::endl;

	ScryptHasher ScryptHasher{ hashKeyOrSecret,16384,8,1,64, encoder->Clone() };
	auto ScryptHasher2 = ScryptHasher::Deserialize(ScryptHasher.Serialize(indent));
	std::cout << ScryptHasher.Serialize(indent) << std::endl;
	std::cout << ScryptHasher2->Serialize(indent) << std::endl;
	std::cout << ScryptHasher.ComputeEncoded(data) << std::endl;
	std::cout << ScryptHasher2->ComputeEncoded(data) << std::endl;

	AesCbcEncryptor aesCbcEncryptor{ encryptorKey, aesCbcPadding, encoder->Clone() };
	std::unique_ptr<IEncryptor> aesCbcEncryptor2 = AesCbcEncryptor::Deserialize(aesCbcEncryptor.Serialize(serializeKey), serializeKey);
	std::cout << aesCbcEncryptor.Serialize(serializeKey, indent) << std::endl;
	std::cout << aesCbcEncryptor2->Serialize(serializeKey, indent) << std::endl;
	std::cout << aesCbcEncryptor.Decrypt(aesCbcEncryptor.Encrypt(data)) << std::endl;
	std::cout << aesCbcEncryptor.DecryptEncoded(aesCbcEncryptor.EncryptEncoded(data)) << std::endl;
	std::cout << aesCbcEncryptor2->Decrypt(aesCbcEncryptor2->Encrypt(data)) << std::endl;
	std::cout << aesCbcEncryptor2->DecryptEncoded(aesCbcEncryptor2->EncryptEncoded(data)) << std::endl;


	RsaEncryptor rsaEncryptor{ rsaKeypair, rsaPadding, encoder->Clone() };
	std::unique_ptr<IEncryptor> rsaEncryptor2 = RsaEncryptor::Deserialize(rsaEncryptor.Serialize(serializeKey), serializeKey);
	std::cout << rsaEncryptor.Serialize(serializeKey, indent) << std::endl;
	std::cout << rsaEncryptor2->Serialize(serializeKey, indent) << std::endl;
	std::cout << rsaEncryptor.Decrypt(rsaEncryptor.Encrypt(data)) << std::endl;
	std::cout << rsaEncryptor.DecryptEncoded(rsaEncryptor.EncryptEncoded(data)) << std::endl;
	std::cout << rsaEncryptor2->Decrypt(rsaEncryptor2->Encrypt(data)) << std::endl;
	std::cout << rsaEncryptor2->DecryptEncoded(rsaEncryptor2->EncryptEncoded(data)) << std::endl;

	CryptoTests::HexEncodingExtensionsTests(false);
	CryptoTests::Base32EncodingExtensionsTests(false);
	CryptoTests::Base64EncodingExtensionsTests(false);

	std::cin.get();
}


