"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1408."""

def spec_graphene_hardened_malloc_1408() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1408, "quarantine_slabs": 1, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1408():
    s = spec_graphene_hardened_malloc_1408()
    assert s["spec_id"] == 1408
